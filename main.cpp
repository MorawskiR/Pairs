
#include <vector>
#include <map>
#include <iostream>
void display_vector(std::vector<int> & vec);
std::map<int, int> transform(std::vector<int> & vec);
void display_map(std::map<int, int> map);
int main()
{
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
  //  display_vector(vec);
    display_map(transform(vec));
    return 0;
}
void display_vector(std::vector<int> & vec)
{
    for(auto const element : vec)
    {
        std::cout<<element<<", ";
    }  
}
std::map<int, int> transform(std::vector<int> & vec)
{
    std::map<int, int> m ;
       for(std::vector<int>::size_type i = 0; i != vec.size(); i++)
            // {
           
            //     std::cout<<vec[i]<<", ";
            // }

                 m.insert(std::pair<int,int>( vec[0],vec[1]));
                 m.insert(std::pair<int,int>( vec[2],vec[3]));
                 m.insert(std::pair<int,int>( vec[4],vec[5]));
                 m.insert(std::pair<int,int>( vec[6],vec[7]));
                 m.insert(std::pair<int,int>( vec[8],vec[9]));
          
    return m;
}
void display_map(std::map<int, int> map)
{
    std::map<int,int>::iterator it = map.begin();

    for (it =map.begin() ; it != map.end(); ++it)
    {
    std::cout<<it->first <<" " <<it->second<<'\n';
    }
}