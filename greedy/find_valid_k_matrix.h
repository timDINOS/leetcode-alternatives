#include <vector>

using namespace std;


vector<vector<int> > find_valid_k_matrix(vector<int> &rowSum, vector<int> &colSum, int k) {
    vector<int> rows(rowSum.begin(), rowSum.begin() + k);
    vector<int> cols(colSum.begin(), colSum.begin() + k);

    vector<vector<int> > matrix(rows.size(), vector<int>(cols.size(), 0));

    int i = 0;
    int j = 0;

    while (i < k && j < k) {
        if (rows[i] < cols[j]) {
            matrix[i][j] = rows[i];
            cols[j] -= rows[i];
            rows[i++] = 0; 
        }
        else {
            matrix[i][j] = cols[j];
            rows[i] -= cols[j];
            cols[j++] = 0;
        }
    }

    return matrix;
}