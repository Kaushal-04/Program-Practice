class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_tank = 0, curr_tank = 0, start_station = 0;
        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];
            total_tank += diff;
            curr_tank += diff;

            // If at any point the tank goes below zero, reset start position
            if (curr_tank < 0) {
                start_station = i + 1;
                curr_tank = 0;
            }
        }

        return total_tank >= 0 ? start_station : -1;
    }
};
