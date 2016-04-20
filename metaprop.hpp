
#pragma once
#include <string>
#include <stdlib.h>

template< class T > struct UnHandle
{
	T* ptr;
	
	UnHandle() : ptr( 0 ){}
	UnHandle( T* p ) : ptr( p ){}
	operator T* () const { return ptr; }
	T* operator -> () const { return ptr; }
};

struct Vec2
{
	float x, y;
};

struct AABB2
{
	Vec2 pmin, pmax;
};

enum PosType
{
	Unknown = 0,
	Relative = 1,
	Absolute = 2,
};

struct OptPos
{
	PosType type;
	Vec2* ppos;
	Vec2* pdir;
	UnHandle<Vec2> pmgd;
	UnHandle<Vec2> pmgu;
	
	struct mpd_StringView getTypeString() const;
	void setTypeFromString( struct mpd_StringView );
};

struct Node;
typedef UnHandle<Node> NodeHandle;
struct Node
{
	NodeHandle lft;
	NodeHandle rgt;
	bool opt;
};

struct NodeOptPos
{
	Node node;
	OptPos optpos;
};

float randf11(){ return float(rand()) * 2 / float(RAND_MAX) - 1; }

struct BoxTest
{
	Vec2 getRandomVec2() const
	{
		Vec2 r = { randf11(), randf11() };
		return r;
	}
	std::string getRandomString() const
	{
		static const char chars[] = "0123456789";
		std::string r;
		r.resize( 8 );
		for( size_t i = 0; i < r.size(); ++i )
		{
			r[ i ] = chars[ rand() % 10 ];
		}
		return r;
	}
};

