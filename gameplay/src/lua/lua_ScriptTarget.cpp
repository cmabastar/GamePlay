// Autogenerated by gameplay-luagen
#include "Base.h"
#include "ScriptController.h"
#include "lua_ScriptTarget.h"
#include "Base.h"
#include "ScriptController.h"
#include "ScriptTarget.h"

namespace gameplay
{

void luaRegister_ScriptTarget()
{
    const luaL_Reg lua_members[] = 
    {
        {"addScript", lua_ScriptTarget_addScript},
        {"addScriptCallback", lua_ScriptTarget_addScriptCallback},
        {"clearScripts", lua_ScriptTarget_clearScripts},
        {"getScriptEvent", lua_ScriptTarget_getScriptEvent},
        {"getTypeName", lua_ScriptTarget_getTypeName},
        {"hasScriptListener", lua_ScriptTarget_hasScriptListener},
        {"removeScript", lua_ScriptTarget_removeScript},
        {"removeScriptCallback", lua_ScriptTarget_removeScriptCallback},
        {NULL, NULL}
    };
    const luaL_Reg* lua_statics = NULL;
    std::vector<std::string> scopePath;

    gameplay::ScriptUtil::registerClass("ScriptTarget", lua_members, NULL, NULL, lua_statics, scopePath);
}

static ScriptTarget* getInstance(lua_State* state)
{
    void* userdata = luaL_checkudata(state, 1, "ScriptTarget");
    luaL_argcheck(state, userdata != NULL, 1, "'ScriptTarget' expected.");
    return (ScriptTarget*)((gameplay::ScriptUtil::LuaObject*)userdata)->instance;
}

int lua_ScriptTarget_addScript(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 2:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                (lua_type(state, 2) == LUA_TSTRING || lua_type(state, 2) == LUA_TNIL))
            {
                // Get parameter 1 off the stack.
                const char* param1 = gameplay::ScriptUtil::getString(2, false);

                ScriptTarget* instance = getInstance(state);
                void* returnPtr = ((void*)instance->addScript(param1));
                if (returnPtr)
                {
                    gameplay::ScriptUtil::LuaObject* object = (gameplay::ScriptUtil::LuaObject*)lua_newuserdata(state, sizeof(gameplay::ScriptUtil::LuaObject));
                    object->instance = returnPtr;
                    object->owns = false;
                    luaL_getmetatable(state, "Script");
                    lua_setmetatable(state, -2);
                }
                else
                {
                    lua_pushnil(state);
                }

                return 1;
            }

            lua_pushstring(state, "lua_ScriptTarget_addScript - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 2).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_addScriptCallback(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 3:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                (lua_type(state, 2) == LUA_TUSERDATA || lua_type(state, 2) == LUA_TTABLE || lua_type(state, 2) == LUA_TNIL) &&
                (lua_type(state, 3) == LUA_TSTRING || lua_type(state, 3) == LUA_TNIL))
            {
                // Get parameter 1 off the stack.
                bool param1Valid;
                gameplay::ScriptUtil::LuaArray<ScriptTarget::Event> param1 = gameplay::ScriptUtil::getObjectPointer<ScriptTarget::Event>(2, "ScriptTargetEvent", false, &param1Valid);
                if (!param1Valid)
                {
                    lua_pushstring(state, "Failed to convert parameter 1 to type 'ScriptTarget::Event'.");
                    lua_error(state);
                }

                // Get parameter 2 off the stack.
                const char* param2 = gameplay::ScriptUtil::getString(3, false);

                ScriptTarget* instance = getInstance(state);
                instance->addScriptCallback(param1, param2);
                
                return 0;
            }

            lua_pushstring(state, "lua_ScriptTarget_addScriptCallback - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 3).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_clearScripts(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                ScriptTarget* instance = getInstance(state);
                instance->clearScripts();
                
                return 0;
            }

            lua_pushstring(state, "lua_ScriptTarget_clearScripts - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_getScriptEvent(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 2:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                (lua_type(state, 2) == LUA_TSTRING || lua_type(state, 2) == LUA_TNIL))
            {
                // Get parameter 1 off the stack.
                const char* param1 = gameplay::ScriptUtil::getString(2, false);

                ScriptTarget* instance = getInstance(state);
                void* returnPtr = ((void*)instance->getScriptEvent(param1));
                if (returnPtr)
                {
                    gameplay::ScriptUtil::LuaObject* object = (gameplay::ScriptUtil::LuaObject*)lua_newuserdata(state, sizeof(gameplay::ScriptUtil::LuaObject));
                    object->instance = returnPtr;
                    object->owns = false;
                    luaL_getmetatable(state, "ScriptTargetEvent");
                    lua_setmetatable(state, -2);
                }
                else
                {
                    lua_pushnil(state);
                }

                return 1;
            }

            lua_pushstring(state, "lua_ScriptTarget_getScriptEvent - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 2).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_getTypeName(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                ScriptTarget* instance = getInstance(state);
                const char* result = instance->getTypeName();

                // Push the return value onto the stack.
                lua_pushstring(state, result);

                return 1;
            }

            lua_pushstring(state, "lua_ScriptTarget_getTypeName - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_hasScriptListener(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 2:
        {
            do
            {
                if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                    (lua_type(state, 2) == LUA_TSTRING || lua_type(state, 2) == LUA_TNIL))
                {
                    // Get parameter 1 off the stack.
                    const char* param1 = gameplay::ScriptUtil::getString(2, false);

                    ScriptTarget* instance = getInstance(state);
                    bool result = instance->hasScriptListener(param1);

                    // Push the return value onto the stack.
                    lua_pushboolean(state, result);

                    return 1;
                }
            } while (0);

            do
            {
                if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                    (lua_type(state, 2) == LUA_TUSERDATA || lua_type(state, 2) == LUA_TTABLE || lua_type(state, 2) == LUA_TNIL))
                {
                    // Get parameter 1 off the stack.
                    bool param1Valid;
                    gameplay::ScriptUtil::LuaArray<ScriptTarget::Event> param1 = gameplay::ScriptUtil::getObjectPointer<ScriptTarget::Event>(2, "ScriptTargetEvent", false, &param1Valid);
                    if (!param1Valid)
                        break;

                    ScriptTarget* instance = getInstance(state);
                    bool result = instance->hasScriptListener(param1);

                    // Push the return value onto the stack.
                    lua_pushboolean(state, result);

                    return 1;
                }
            } while (0);

            lua_pushstring(state, "lua_ScriptTarget_hasScriptListener - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 2).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_removeScript(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 2:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                (lua_type(state, 2) == LUA_TSTRING || lua_type(state, 2) == LUA_TNIL))
            {
                // Get parameter 1 off the stack.
                const char* param1 = gameplay::ScriptUtil::getString(2, false);

                ScriptTarget* instance = getInstance(state);
                bool result = instance->removeScript(param1);

                // Push the return value onto the stack.
                lua_pushboolean(state, result);

                return 1;
            }

            lua_pushstring(state, "lua_ScriptTarget_removeScript - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 2).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScriptTarget_removeScriptCallback(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 3:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA) &&
                (lua_type(state, 2) == LUA_TUSERDATA || lua_type(state, 2) == LUA_TTABLE || lua_type(state, 2) == LUA_TNIL) &&
                (lua_type(state, 3) == LUA_TSTRING || lua_type(state, 3) == LUA_TNIL))
            {
                // Get parameter 1 off the stack.
                bool param1Valid;
                gameplay::ScriptUtil::LuaArray<ScriptTarget::Event> param1 = gameplay::ScriptUtil::getObjectPointer<ScriptTarget::Event>(2, "ScriptTargetEvent", false, &param1Valid);
                if (!param1Valid)
                {
                    lua_pushstring(state, "Failed to convert parameter 1 to type 'ScriptTarget::Event'.");
                    lua_error(state);
                }

                // Get parameter 2 off the stack.
                const char* param2 = gameplay::ScriptUtil::getString(3, false);

                ScriptTarget* instance = getInstance(state);
                instance->removeScriptCallback(param1, param2);
                
                return 0;
            }

            lua_pushstring(state, "lua_ScriptTarget_removeScriptCallback - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 3).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

}
