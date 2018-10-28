class Distance
{
private:
int foot, inch;
public:
Distance (): foot(0), inch (0) {}
Distance (): foot (0),inch (0) {}
Distance (int f, int in): foot (f), inch (0) {}
void getdist {}
{
cout <<"\n enter foot value : "; cin>> foot;
cout <<"enter inch value : " ; cin >. inch;
}
void showdist ()
{
cout <<foot<<"-"<<inch<<endl;}
void sub_dist (Distance,Distacne);
};
void Distance: : sub_dist (Distance d2, Distacne d3)
{
inch = d2.inch - d3.inch;
foot=0
{
foot--;
}
foot -=d2.foot - d3.foot;
}
int main ()
{
Distance dist1, dist3;
dist1.showdist ();
dist3.showdist();
Distance dist2(5,6);
dist2.showdist();
dist1.getdist ();
dist3.sub_dist (dist1, dist2);
cout <<"\n dist1=";
dist1.showdist();
cout<<"\n dist2=";
dist2.showdist ();
cout <,"\n dist3 =";
cout << endl;
return 0;
}