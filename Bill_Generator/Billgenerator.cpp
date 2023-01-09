#include <bits/stdc++.h>

using namespace std;


int main()
{       
    while(1){
    time_t tmNow;
    tmNow = time(0);
    struct tm t = *localtime(&tmNow);
    string s=to_string(t.tm_mon)+ "-" +to_string(t.tm_mday)+"-"+to_string(t.tm_year)+"_"+to_string(t.tm_hour)+"_"+to_string(t.tm_min)+"_"+to_string(t.tm_sec);

        int x;
        cout<<"Type 1 for genrating invoice"<<endl;
        cout<<"Type 2 to view a invoice"<<endl;
        cout<<"Type 3 to exit"<<endl;
        cout<<"Enter an Input:";
        cin>>x;

        switch (x)

        {
        case 1 :{
         
//     cout<<"Current Time: "<<t.tm_hour<<":"<<t.tm_min<<":"<<t.tm_sec;
//  cout<<"Current Date: "<<t.tm_mday<<"-"<<t.tm_mon+1<<"-"<<t.tm_year+1900;
    // cout<<s;
    string ItemName;
    float price;
    unordered_map<string,float> item_list;

    while(1){
        int t;
        cout<<"Type 1 to add an Item"<<endl;
        cout<<"Type 2 to end:"<<endl;
        cout<<"Enter an Input:";
        cin>>t;

        switch (t)
        {
        case 1:{
            cout<<"Name of the Item:";
            cin>>ItemName;
            cout<<"Price of the Item:";
            cin>>price;
            item_list[ItemName]=price;
            cout<<"Item Added successfully"<<endl<<"Add More!!"<<endl;
            break;
        }
        case 2:{
            break;
        }
        default:
            break;
        }
        if(t==2) break;
    }
    float total=0;
    int n=0;
    int namesize,pricesize;
    fstream file;
    string txt=".txt";
    string filename= s+txt;
    file.open(filename,ios::out);
    ofstream selectedfile(filename);
    selectedfile<<"**********************Invoice**********************"<<endl;
    for(auto x:item_list){
    namesize=x.first.length();
    pricesize=to_string(x.second).length();
    n=56-(namesize+pricesize);
    selectedfile<<x.first<<" :"<<string(n,' ')<<x.second<<endl;
    total+=x.second;
    }
    selectedfile<<"Total Amount : "<<string(n-8,' ')<<total;

    if(!file)
    {
	    cout<<"Error in creating file!!!";
	    return 0;
    }
    cout<<"File created successfully."<<endl;
    file.close();

            break;
            }

        case 2:{
            fstream my_file;
            cout<<"Enter the file name:";
            string readfilename;
            cin>>readfilename;
            string file_name=readfilename+".txt";
	        my_file.open(file_name, ios::in);
	        if (!my_file) {
		    cout << "No such file";
	    }
	        else {
		    char ch;

		    while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;
			    cout << ch;
		}

	}
            my_file.close();
            }
            case 3: break;
            default:
            break;
            }
        if(x==3) break;

    }

return 0;
}
