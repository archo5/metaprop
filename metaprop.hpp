
#include <string>

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
};

struct NodeOptPos
{
	Node node;
	OptPos optpos;
};

