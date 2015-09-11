#ifndef lua_glue_h
#define lua_glue_h

bool lua_registerAhkfunctions(lua_State* L);

enum ResultType RunLuaFile( LPCTSTR tszFilename );

#endif // !lua_glue_h
