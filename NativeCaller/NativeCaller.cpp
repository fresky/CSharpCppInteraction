// NativeCaller.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#import "../ManagedCalculator/bin/Debug/ManagedCalculator.tlb" raw_interfaces_only
int _tmain(int argc, _TCHAR* argv[])
{
	// Initialize COM.
	HRESULT hr = CoInitialize(NULL);

	// Create the interface pointer.
	ManagedCalculator::ICalculatorPtr pICalc(__uuidof(ManagedCalculator::ManagedCalculator));

	long lResult = 0;

	// Call the Add method.
	pICalc->Add(5, 10, &lResult);

	wprintf(L"The result is %d\n", lResult);


	// Uninitialize COM.
	CoUninitialize();
	return 0;
}

