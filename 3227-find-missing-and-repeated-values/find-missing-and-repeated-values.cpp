
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(
        vector<vector<int>>& grid) {

        long long n = grid.size();
        long long N = n * n;

        long long expectedSum = N * (N + 1) / 2;
        long long expectedSqSum =
            N * (N + 1) * (2 * N + 1) / 6;

        long long actualSum = 0;
        long long actualSqSum = 0;

        for (auto& row : grid) {
            for (int val : row) {
                actualSum += val;
                actualSqSum += 1LL * val * val;
            }
        }

        long long A = actualSum - expectedSum;
        long long B = actualSqSum - expectedSqSum;

        long long sumXY = B / A;

        long long repeated = (A + sumXY) / 2;
        long long missing = repeated - A;

        return {(int)repeated, (int)missing};
    }
};
