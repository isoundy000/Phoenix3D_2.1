// PX2Project.cpp

#include "PX2Project.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
Project::Project()
{
}
//----------------------------------------------------------------------------
Project::~Project ()
{
}
//----------------------------------------------------------------------------
void Project::SetSize(float width, float height)
{
	mSize = Sizef(width, height);
}
//----------------------------------------------------------------------------
void Project::SetSize(const Sizef &size)
{
	mSize = size;
}
//----------------------------------------------------------------------------