/*
Given a point and a circle, determine if the point lies strictly inside the circle.

Example

For xa = 0, ya = 0, xc = 0, yc = 0 and rc = 1, the output should be
isInsideTheCircle(xa, ya, xc, yc, rc) = true.



For xa = -1, ya = -1, xc = 0, yc = 0 and rc = 1, the output should be
isInsideTheCircle(xa, ya, xc, yc, rc) = false.


*/
bool isInsideTheCircle(int xa, int ya, int xc, int yc, int rc) {
	int dist = (xa - xc)*(xa - xc) + (ya - yc)*(ya - yc);
	rc *= rc;
	if (dist < rc) {
		return true;
	}
	return false;
}