/*A team of engineers was tasked with developing a program to calculate and manage the areas of

multiple circles for a design project. To achieve this, they devised a solution using a structured, object-
oriented approach. At the foundation of their solution was a base class that represented a generic

shape, responsible for storing and managing the radius of the circle. Building upon this, a specialized
class for circles was created to extend functionality by introducing a method for calculating the area
of a circle based on its radius. Using this framework, the team designed a system to handle multiple
circles, ensuring that the process of storing, calculating, and displaying the areas was efficient and
adaptable. They explored two different approaches for managing the collection of circles—one
focusing on flexibility and dynamic handling, while the other used a more static structure. By
implementing and comparing these methods, the engineers gained insights into the benefits of using
efficient techniques for organizing and processing geometric data, enhancing their problem-solving
capabilities.*/
#include <iostream>
using namespace std;
class shape
{
  int radius;
  public:
       void set_radius(int r)

       {
          radius = r ;
       }
       int get_radius(){
           return radius;
       }
};
class circle : public shape{
    float area;
public:
    void process()
    {
        area=3.14 * get_radius() * get_radius() ;
        cout<<"\nThe area of circle with radius " <<get_radius()<<" is :" <<area;
    }
};
int main()
{
    circle c[20];
    int n,i,r;
    cout<<"Enter the no. of circles ";
    cin>>n;
    for(int i=0 ; i<n ;i++)
    {

        cout<<"\n\nEnter the radius of circle : " <<i+1<<":";
        cin>>r;
        c[i].set_radius(r);
        c[i].process();
    }
    cout<<"\n KRRISH BHARDWAJ \n 24CE010.";
    return 0;
}