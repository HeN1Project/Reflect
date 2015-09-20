#include "ReflectPch.h"
#include "TranslateStandardLibrary.h"

#include "Reflect/Object.h"

using namespace Helium;
using namespace Helium::Reflect;

StlStringTranslator::StlStringTranslator()
	: ScalarTranslator( sizeof( std::string ), ScalarTypes::String )
{
}

void Helium::Reflect::StlStringTranslator::Construct( Pointer pointer )
{
	DefaultConstruct< std::string >( pointer );
}

void Helium::Reflect::StlStringTranslator::Destruct( Pointer pointer )
{
	DefaultDestruct< std::string >( pointer );
}

void StlStringTranslator::Copy( Pointer src, Pointer dest, uint32_t flags )
{
	DefaultCopy< std::string >( src, dest, flags );
}

bool StlStringTranslator::Equals( Pointer a, Pointer b )
{
	return DefaultEquals< std::string >( a, b );
}

void StlStringTranslator::Print( Pointer pointer, String& string, ObjectIdentifier* identifier )
{
	string = pointer.As< std::string >().c_str();
}

void StlStringTranslator::Parse( const String& string, Pointer pointer, ObjectResolver* resolver, bool raiseChanged )
{
	pointer.As< std::string >() = string.GetData();
}

//#if 0
// HEN1


Helium::Reflect::StlComplexFloat32Translator::StlComplexFloat32Translator()
	: ScalarTranslator( sizeof( std::complex<float32_t> ), ScalarTypes::ComplexFloat32)
{
}

void Helium::Reflect::StlComplexFloat32Translator::Construct( Pointer pointer )
{
	DefaultConstruct< std::complex<float32_t> >( pointer );
}


void Helium::Reflect::StlComplexFloat32Translator::Destruct( Pointer pointer )
{
	DefaultDestruct< std::complex<float32_t> >( pointer );
}


void Helium::Reflect::StlComplexFloat32Translator::Copy( Pointer src, Pointer dest, uint32_t flags )
{
	DefaultCopy< std::complex<float32_t> >( src, dest, flags );
}


bool Helium::Reflect::StlComplexFloat32Translator::Equals( Pointer a, Pointer b )
{
	return DefaultEquals< std::complex<float32_t> >( a, b );
}


void Helium::Reflect::StlComplexFloat32Translator::Print( Pointer pointer, String& string, ObjectIdentifier* identifier )
{
	// TODO string = pointer.As< std::string >().c_str();
}


void Helium::Reflect::StlComplexFloat32Translator::Parse( const String& string, Pointer pointer, ObjectResolver* resolver, bool raiseChanged )
{
	//TODO pointer.As< std::string >() = string.GetData();
}



Helium::Reflect::StlComplexFloat64Translator::StlComplexFloat64Translator()
	: ScalarTranslator( sizeof( std::complex<float64_t> ), ScalarTypes::ComplexFloat64)
{
}

void Helium::Reflect::StlComplexFloat64Translator::Construct( Pointer pointer )
{
	DefaultConstruct< std::complex<float64_t> >( pointer );
}


void Helium::Reflect::StlComplexFloat64Translator::Destruct( Pointer pointer )
{
	DefaultDestruct< std::complex<float64_t> >( pointer );
}


void Helium::Reflect::StlComplexFloat64Translator::Copy( Pointer src, Pointer dest, uint32_t flags )
{
	DefaultCopy< std::complex<float64_t> >( src, dest, flags );
}


bool Helium::Reflect::StlComplexFloat64Translator::Equals( Pointer a, Pointer b )
{
	return DefaultEquals< std::complex<float64_t> >( a, b );
}


void Helium::Reflect::StlComplexFloat64Translator::Print( Pointer pointer, String& string, ObjectIdentifier* identifier )
{
	// TODO string = pointer.As< std::string >().c_str();
}


void Helium::Reflect::StlComplexFloat64Translator::Parse( const String& string, Pointer pointer, ObjectResolver* resolver, bool raiseChanged )
{
	//TODO pointer.As< std::string >() = string.GetData();
}


//#endif


