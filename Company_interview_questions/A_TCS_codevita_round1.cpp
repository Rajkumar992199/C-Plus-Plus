#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

struct Rectangle {
    int x, y, w, h; 
};

int CANVAS_W, CANVAS_H;

// --- Helper Functions ---

bool check_boundary(const Rectangle& R) {
    // Canvas boundary check: x+w <= W and y+h <= H
    return R.x >= 0 && R.y >= 0 && R.x + R.w <= CANVAS_W && R.y + R.h <= CANVAS_H;
}

bool check_overlap_or_touch(const Rectangle& R1, const Rectangle& R2) {
    bool separated = (R1.x + R1.w < R2.x) || 
                     (R2.x + R2.w < R1.x) || 
                     (R1.y + R1.h < R2.y) || 
                     (R2.y + R2.h < R1.y);   
    
    return !separated;
}

int find_exact_match(const vector<Rectangle>& canvas, int x, int y, int w, int h) {
    for (size_t i = 0; i < canvas.size(); ++i) {
        if (canvas[i].x == x && canvas[i].y == y && canvas[i].w == w && canvas[i].h == h) {
            return i;
        }
    }
    return -1;
}

int find_top_left_match(const vector<Rectangle>& canvas, int x, int y) {
    for (size_t i = 0; i < canvas.size(); ++i) {
        if (canvas[i].x == x && canvas[i].y == y) {
            return i;
        }
    }
    return -1;
}

// --- Main Solver Function ---

void solve() {
    // Read M and N
    int M_val, N_val;
    if (!(cin >> M_val >> N_val)) return;

    // FIX: Reversing interpretation to W=8, H=6 based on Example 1's viability.
    // The prompt says M is height, N is width. If M=8, N=6. 
    // BUT the example only works if W=8 (max x=8) and H=6 (max y=6).
    // Assuming the input values are W and H, not H and W.
    CANVAS_W = M_val; // W=8
    CANVAS_H = N_val;  // H=6

    int C;
    if (!(cin >> C)) return;
    cin.ignore(); 

    vector<Rectangle> canvas;
    vector<string> invalid_commands;

    for (int i = 0; i < C; ++i) {
        string line;
        if (!getline(cin, line)) break;
        
        stringstream ss(line);
        string command;
        ss >> command;

        int x, y, w, h; 
        
        if (command == "draw") {
            ss >> x >> y >> w >> h;
            Rectangle R_new = {x, y, w, h};
            
            if (!check_boundary(R_new)) {
                invalid_commands.push_back(line);
                continue;
            }
            
            bool overlap = false;
            for (const auto& R_exist : canvas) {
                if (check_overlap_or_touch(R_new, R_exist)) {
                    overlap = true;
                    break;
                }
            }

            if (overlap) {
                invalid_commands.push_back(line);
            } else {
                canvas.push_back(R_new);
            }
        
        } else if (command == "remove") {
            ss >> x >> y >> w >> h;
            int idx = find_exact_match(canvas, x, y, w, h);

            if (idx != -1) {
                canvas.erase(canvas.begin() + idx);
            } else {
                invalid_commands.push_back(line); 
            }

        } else if (command == "shrink") {
            ss >> x >> y >> w >> h; 
            int idx = find_top_left_match(canvas, x, y);

            if (idx != -1 && w > 0 && h > 0) {
                const auto& R_old = canvas[idx];
                
                // Invalid if: trying to enlarge in ANY dimension (w_new > w_old OR h_new > h_old)
                if (w > R_old.w || h > R_old.h) {
                     invalid_commands.push_back(line);
                     continue;
                }
                
                // If it's a valid shrink or a no-op shrink (target size met), proceed
                canvas[idx].w = w;
                canvas[idx].h = h;

            } else {
                invalid_commands.push_back(line); 
            }

        } else if (command == "extend") {
            ss >> x >> y >> w >> h; 
            int idx = find_top_left_match(canvas, x, y);
            
            if (idx != -1 && w > 0 && h > 0) {
                const auto& R_old = canvas[idx];
                
                // Invalid if: trying to shrink in ANY dimension (w_new < w_old OR h_new < h_old)
                if (w < R_old.w || h < R_old.h) {
                    invalid_commands.push_back(line);
                    continue;
                }
                
                Rectangle R_new = {x, y, w, h};

                // 1. Boundary Check
                if (!check_boundary(R_new)) {
                    invalid_commands.push_back(line);
                    continue;
                }

                // 2. Overlap Check against ALL OTHER existing rectangles
                bool overlap = false;
                for (size_t j = 0; j < canvas.size(); ++j) {
                    if ((int)j != idx) { 
                        if (check_overlap_or_touch(R_new, canvas[j])) {
                            overlap = true;
                            break;
                        }
                    }
                }

                if (overlap) {
                    invalid_commands.push_back(line);
                } else {
                    // All checks pass, update the existing rectangle
                    canvas[idx].w = w;
                    canvas[idx].h = h;
                }

            } else {
                invalid_commands.push_back(line); 
            }
        }
    }

    // --- Output ---
    for (const auto& cmd : invalid_commands) {
        cout << cmd << endl;
    }
    cout << canvas.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}