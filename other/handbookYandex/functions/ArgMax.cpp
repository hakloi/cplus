#include <iostream>
#include <vector>
#include <sstream>
#include <string>

std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix)
{
    size_t maxCol = 0;
    size_t maxRow = 0;
    int maxEl =matrix[0][0];
    
    for (size_t i = 0; i < matrix.size(); i++)
    {
        for (size_t j = 0; j <matrix[i].size(); j++)
        {
            if (matrix[i][j] > maxEl)
            {
                maxEl = matrix[i][j];
                maxCol = i;
                maxRow = j;
            }
        }
    }
    
    return {maxCol, maxRow};

}

int main()
{
    int n, k;
    std::vector<std::vector<int>> matrix;
    
    std::cin >> n >> k;
    std::cin.ignore();
    
    for (int i = 0; i <= n; i++)
    {
        std::string line;
        std::getline(std::cin, line);
    
        std::istringstream iss(line);
        std::vector <int> row;
        int number;
        while (iss >> number)
        {
            row.push_back(number);
        }
        
        matrix.push_back(row);
    }
    
    auto [row, col] = MatrixArgMax(matrix);
    std::cout << row << " " << col << std::endl;

    return 0;
}