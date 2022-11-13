double height(double v, double a){
    double angle = toRadians(a);
    double height = (((pow(v, 2)) / (2 * 9.81)) * (pow(sin(2*angle), 2) )) ;
    return height;
}