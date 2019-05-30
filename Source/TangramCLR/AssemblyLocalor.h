#pragma once

using namespace System;
using namespace System::Reflection;
using namespace System::Collections::Generic;

public ref class AssemblyLocalor
{
	static Dictionary<String^, Assembly^>^ assemblies;

public:

	static void Init()
	{
		assemblies = gcnew Dictionary<String^, Assembly^>();
		AppDomain::CurrentDomain->AssemblyLoad += gcnew AssemblyLoadEventHandler(CurrentDomain_AssemblyLoad);
		AppDomain::CurrentDomain->AssemblyResolve += gcnew ResolveEventHandler(CurrentDomain_AssemblyResolve);

	}

	static Assembly^ CurrentDomain_AssemblyResolve(Object^ sender, ResolveEventArgs^ args)
	{
		Assembly^ assembly = nullptr;
		assemblies->TryGetValue(args->Name, assembly);
		return assembly;
	}

	static void CurrentDomain_AssemblyLoad(Object^ sender, AssemblyLoadEventArgs^ args)
	{
		Assembly^ assembly = args->LoadedAssembly;
		assemblies[assembly->FullName] = assembly;
	}

};