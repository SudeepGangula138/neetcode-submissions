class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
                int n = position.size();
        vector<pair<int, int>> cars;
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
                sort(cars.rbegin(), cars.rend());
int fleets = 0;
double lastTime = 0;
for (auto &[position, speed] : cars) {
    double time = (double)(target - position) / speed;
    if (time > lastTime) {
        fleets++;
        lastTime = time;
    }
}
            return fleets;
    }
};
