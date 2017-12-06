/*
One of the thresholding operations applied to images is truncation. Consider each pixel of some image one by one. If the intensity of a pixel is higher than threshold then it is set to threshold. Otherwise, it isn't changed.

Apply this operation to the given image.

Example

For

image = [[0, 100, 100],
[1, 255, 103]]
and threshold = 102, the output should be

imageTruncation(image, threshold) = [[0, 100, 100],
[1, 102, 102]]
*/

typedef std::vector<std::vector<int>> matrix;

matrix imageTruncation(matrix image, int threshold) {

	for (int i = 0; i < image.size(); i++) {
		for (int j = 0; j<size(image[i]); j++) {
			if (image[i][j] > threshold) {
				image[i][j] = threshold;
			}
		}
	}
	return image;
}
