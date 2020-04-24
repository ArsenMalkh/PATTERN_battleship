#include <iostream>
#include <string>
#include <vector>
using namespace std;
class unit{
public:
	virtual void connect() = 0;
	virtual ~unit(){};
};
class myplayer:public unit{
	void connect()
	{
		cout<<"you are in game."<<endl;
	}
};
class easycomputer:public unit{
	void connect()
	{
		cout<<"Your opponent is easycomputer"<<endl;
	}
};
class hardcomputer:public unit{
	void connect()
	{
		cout<<"Your opponent is hardcomputer"<<endl;
	}
};
//////////////////////////////////////////////
class battleship{
public:
	virtual vector<unit*> connectplayers() = 0;
	virtual ~battleship(){};
	void connection()
	{
		vector<unit*> r= connectplayers();
		for(size_t i=0;i<r.size();i++)
			r[i]->connect();	
	}
};
class easygame : public battleship{
public:
	vector<unit*> connectplayers() override
	{
		vector<unit*> q;
		q.push_back(new myplayer);
		q.push_back(new easycomputer);
		return q;
	}
};
class hardgame : public battleship{
public:
	vector<unit*> connectplayers() override
	{
		vector<unit*> q;
		q.push_back(new myplayer);
		q.push_back(new hardcomputer);
		return q;
	}
};

int main()
{
	string s;
	cout<<"Hello my name is Arsen, and I want to introduce my own battleship"<<endl;
	cout<<"First choose level of the game (easy/hard) => ";
	cin>>s;
	cout<<endl;
	battleship* level;
	if(s == "easy")
		level = new easygame;
	else
		level = new hardgame;
	level->connection();
	delete level;
	return 0;
}
