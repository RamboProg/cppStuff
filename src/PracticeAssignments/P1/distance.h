double distance(double v, double a){
    double angle = toRadians(a);
    double dist = ( (pow(v, 2)/9.81) * (sin(2 * angle)) );
    return dist;
}