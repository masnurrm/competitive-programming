#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor == color) return image;
        fill(image, sr, sc, originalColor, color);
        return image;
    }
    
private:
    void fill(vector<vector<int>>& image, int sr, int sc, int originalColor, int newColor) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size()) return;
        if (image[sr][sc] != originalColor) return;
        image[sr][sc] = newColor;
        fill(image, sr + 1, sc, originalColor, newColor);
        fill(image, sr - 1, sc, originalColor, newColor);
        fill(image, sr, sc + 1, originalColor, newColor);
        fill(image, sr, sc - 1, originalColor, newColor);
    }
};