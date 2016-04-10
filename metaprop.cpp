
#include "metaprop.hpp"
#include "metaprop.mpd.hpp"


int main()
{
	puts( "--- basic info dumping ---" );
	mpd_DumpInfo<Vec2>();
	mpd_DumpInfo<Vec2_MPD>();
	puts("");
	
	puts( "--- basic data dumping ---" );
	Vec2 x001 = { 1337, 3.14f };
	mpd_DumpData( x001 );
	puts("");
	
	puts( "--- basic info retrieval ---" );
	printf( "- name(): %s\n- propcount(): %d\n", mpd_MetaType<Vec2>::name(), mpd_MetaType<Vec2>::propcount() );
	puts("");
	
	puts( "--- finding properties ---" );
	printf( "property 'x' info = %p\n", mpd_MetaType<Vec2>::findprop( "x" ) );
	printf( "property 'y' info = %p\n", mpd_MetaType<Vec2>::findprop( "y" ) );
	puts("");
	
	puts( "--- reading/writing properties ---" );
	printf( "property 'x' before modification: %f; mpd_Variant::getprop: %f\n", x001.x, mpd_Variant( x001 ).getprop( "x" ).get_float32() );
	mpd_Variant( x001 ).setprop( "x", 12345 );
	printf( "property 'x' after modification: %f; mpd_Variant::getprop: %f\n", x001.x, mpd_Variant( x001 ).getprop( "x" ).get_float32() );
	mpd_DumpData( x001 );
	puts("");
	
	puts( "--- struct-in-struct info dumping ---" );
	mpd_DumpInfo<AABB2>();
	puts("");
	
	puts( "--- sis data dumping ---" );
	AABB2 x002 = { { 1, 2 }, { 3, 5 } };
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- sis info retrieval ---" );
	printf( "- name(): %s\n- propcount(): %d\n", mpd_MetaType<AABB2>::name(), mpd_MetaType<AABB2>::propcount() );
	puts("");
	
	puts( "--- reading/writing subproperties ---" );
	printf( "property 'pmin.x' before modification: %f; mpd_Variant::getprop: %f\n", x002.pmin.x, mpd_Variant( x002 ).getprop( "pmin" ).getprop( "x" ).get_float32() );
	mpd_Variant( x002 ).getprop( "pmin" ).setprop( "x", 12345 );
	printf( "property 'pmin.x' after modification: %f; mpd_Variant::getprop: %f\n", x002.pmin.x, mpd_Variant( x002 ).getprop( "pmin" ).getprop( "x" ).get_float32() );
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- reading/writing properties ---" );
	printf( "property 'pmax' before modification: %f;%f; mpd_Variant::getprop: %f;%f\n", x002.pmax.x, x002.pmax.y,
		mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().x, mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().y );
	mpd_Variant( x002 ).setprop( "pmax", x001 );
	printf( "property 'pmax' after modification: %f;%f; mpd_Variant::getprop: %f;%f\n", x002.pmax.x, x002.pmax.y,
		mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().x, mpd_Variant( x002 ).getprop( "pmax" ).get_obj<Vec2>().y );
	mpd_DumpData( x002 );
	puts("\n");
	
	puts( "--- print variants ---" );
	mpd_DumpData( mpd_Variant() ); puts("");
	mpd_DumpData( mpd_Variant(x002).getprop("pmin").getprop("x") ); puts("");
	mpd_DumpData( mpd_Variant(x002).getprop("pmin") ); puts("");
	puts("");
	
	puts( "--- enum info dumping ---" );
	mpd_DumpInfo<PosType>();
	puts("");
	
	puts( "--- enum/pointer-to-struct info dumping ---" );
	mpd_DumpInfo<OptPos>();
	puts("");
	
	puts( "--- enum/pointer-to-struct data dumping ---" );
	OptPos x003 = { Relative, &x001, NULL, &x001, NULL };
	mpd_DumpData( x003 );
	puts("\n");
	
	puts( "--- pointer target retrieval ---" );
	mpd_DumpData( mpd_Variant(x003).getprop("ppos").get_target() ); puts("");
	mpd_DumpData( mpd_Variant(x003).getprop("pdir").get_target() ); puts(" -- variant->getprop(pdir)->get_target()");
	mpd_DumpData( mpd_Variant(x003).getprop("pdir").getprop("x") ); puts(" -- variant->getprop(pdir)->getprop(x)");
	puts("");
	
	puts( "--- recursive structures ---" );
	Node x004a = { NULL, NULL };
	Node x004b = { &x004a, NULL };
	Node x004c = { NULL, NULL };
	Node x004 = { &x004b, &x004c };
	mpd_DumpInfo<Node>();
	mpd_DumpData( x004 ); puts("");
	puts("");
	
	puts( "--- recursive dumping ---" );
	mpd_DumpInfo( mpd_MetaType<NodeOptPos>::inst() );
	puts("");
	
	puts( "--- std::string ---" );
	mpd_DumpInfo<std::string>();
	std::string x005 = "testString";
	mpd_DumpData( x005 ); puts("");
	puts("> resizing via property (to 7)...");
	mpd_Variant( x005 ).setprop( "size", 7 );
	mpd_DumpData( x005 ); puts("");
	puts("> setting character 0 to 'f'...");
	mpd_Variant( x005 ).setindex( 0, 'f' );
	mpd_DumpData( x005 ); puts("");
	puts("> setting character 1 to 'a'...");
	mpd_Variant( x005 ).setindex( 1, 'a' );
	mpd_DumpData( x005 ); puts("");
	printf( "character 1: '%c'\n", mpd_Variant( x005 ).getindex( 1 ).get_int8() );
	puts("> setting whole string to 'whoa'...");
	mpd_Variant( x005 ).setprop( "data", "whoa" );
	mpd_DumpData( x005 ); puts("");
	puts("");
	
	return 0;
}
