class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int size = image.size();
        
        for(int i = 0; i < size; i++) {

            int first = 0;
            int j = size - 1;

            while(first < j) {
            
                replace(image, i , j);

                replace(image, i , first);

                int temp = image[i][first];
                image[i][first] = image[i][j];
                image[i][j] = temp;

                first += 1;
                j -= 1;
            }

            if(first == j)
                replace(image, i , j);
        }
        return image;
    }

    void replace(vector<vector<int>>& image, int row, int col){

        if(image[row][col] == 0)
            image[row][col] = 1;
        else
            image[row][col] = 0;

    }

};