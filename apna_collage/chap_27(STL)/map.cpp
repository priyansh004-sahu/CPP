#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

void use_Map() { 
   map<string, int> m;

   m["tv"] = 50;
   m["laptop"] = 150;
   m["phone"] = 200;
   m["headphone"] = 300;

   m.insert({"camera", 400});
   m.emplace("tablet", 500);

  m.erase("tv");
   for(auto p: m) {
    cout << p.first << " " << p.second << endl;
   }
   cout << "count = " << m.count("laptop") << endl;

   if(m.find("camera") != m.end()) {
    cout << "found\n";
   } else {
    cout << "not found\n";
   }
   cout << endl;
}
void use_multi_map() {
      multimap<string, int> m;

     m.emplace("tv", 100);
     m.emplace("tv", 100);
     m.emplace("tv", 100);
     m.emplace("tv", 100);
     m.emplace("laptop", 100);

     m.erase(m.find("laptop"));
     for(auto p: m) {
    cout << p.first << " " << p.second << endl;
   }
   cout << endl;
}

 void use_unordered_map() {
    unordered_map<string, int> m;
     
      m.emplace("tv", 100);
     m.emplace("tv", 100);
     m.emplace("pc", 100);
     m.emplace("tablet", 100);
     m.emplace("laptop", 100);

     m.erase(m.find("laptop"));
     for(auto p: m) {
    cout << p.first << " " << p.second << endl;
   }
   cout << endl;

 }
 

int main() {
    use_Map();
    use_multi_map();
    use_unordered_map();
}