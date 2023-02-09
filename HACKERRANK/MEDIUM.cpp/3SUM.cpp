int surfaceArea(vector<vector<int>> A) {
   
    int s = 0;
    
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[i].size(); j++) {
            s=s+ 6*A[i][j] - 2*(A[i][j]-1);
            if (i+1 < A.size()) {
                s -= 2*min(A[i][j], A[i+1][j]);
            }
            if (j+1 < A[i].size()) {
                s -= 2*min(A[i][j], A[i][j+1]);
            }
        }
    }
    
    return s;
}
