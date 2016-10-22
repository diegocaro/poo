class RectangleRule {
    double integrate( double f(double x), double a, double b, int N) {
        double delta = (b - a) / N;
        double sum = 0.0;
        for(int i = 0; i < N; ++i) {
            sum += delta * f(a + delta * (i + 0.5));
        }
        return sum;
    }
};