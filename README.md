# flipping-an-image

Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.<br>
To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].<br>
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
 
Example 1:

Input: image = [[1,1,0],[1,0,1],[0,0,0]]<br>
Output: [[1,0,0],[0,1,0],[1,1,1]]

Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].<br>
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

Example 2:

Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]<br>
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]

Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].<br>
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
