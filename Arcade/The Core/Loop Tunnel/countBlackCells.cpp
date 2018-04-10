// https://www.cut-the-knot.org/Curriculum/Geometry/LineThroughGrid.shtml#solution
int countBlackCells(int n, int m) {
    return m + n + gcd(m, n) - 2;
}
