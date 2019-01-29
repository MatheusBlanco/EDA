#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Optimal{
    friend ostream& operator<<(ostream& os, const Optimal& opt){
        for(const auto& x : opt.elements)
            os << x;

        os << " (" << opt.comparisons << "/" << opt.total << ")";

        return os;
    }

    public:
    bool search(const T& info){
        auto it = find(elements.begin(), elements.end(), info); //procurar  o info passando o iterador pelo begin e end
        bool found = true; //a busca de cima é verdadeira

        total += elements.size();

        auto dist = distance(elements.begin(), it);
        comparisons += (it == elements.end() ? dist : dist + 1);

        if(it == elements.end()){
            elements.push_back(info);
            it = prev(elements.end());
            found = false;
        }

        ++histogram[info];

        while(it != elements.begin()){
            auto p = prev(it);
            auto hp = histogram[*p], hit = histogram[*it];

            if(hp > hit or (hp == hit and *p < *it))
                break;
            swap(*it, *p);
            it = p;
        }
        return found;
    }

    private:
    list<T> elements;
    map<T, int> histogram;
    int comparisons = 0, total = 0;
};

int main(){
    const string message{ "ACBCDADACACCEE"};
    Optimal<char> auto_list;

    for(const auto& c : message){
        auto_list.search(c);
        cout << auto_list << '\n';
    }
}