class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        // double kelvin = ;
        // double Fahrenhiet = ;

        return {celsius + 273.15, (celsius * 1.80) +32.00};
    }
};