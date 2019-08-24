// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"
#include "TableUtil.h"
/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules 
 * within this plugin.
 */
class ILuaManuallyGlue : public IModuleInterface
{

public:
	virtual void StartupModule()
	{
		UTableUtil::log("ILuaManuallyGlue Startup");
	}
	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	// static inline ILuaPluginRuntime& Get()
	// {
	// 	return FModuleManager::LoadModuleChecked< ILuaPluginRuntime >( "LuaPluginRuntime" );
	// }

	// *
	//  * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	//  *
	//  * @return True if the module is loaded and ready to use
	 
	// static inline bool IsAvailable()
	// {
	// 	return FModuleManager::Get().IsModuleLoaded( "LuaPluginRuntime" );
	// }
};
