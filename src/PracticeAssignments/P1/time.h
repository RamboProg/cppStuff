double time(double v, double a){
    double angle = toRadians(a);
    double t = (((2 * v) / 9.81) * sin(2 * angle));
    return t;

}