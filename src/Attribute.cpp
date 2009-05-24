//
// libxmlmmm
// Copyright 2008 - 2009 Sean Farell
//
// This file is part of libqgl.
//
// libxmlmmm is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// libxmlmmm is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with libxmlmmm. If not, see <http://www.gnu.org/licenses/>.
//

#include "Attribute.h"

namespace xml
{
//------------------------------------------------------------------------------
    Attribute::Attribute(xmlNode* cobj) 
    : Node(cobj) {}
    
//------------------------------------------------------------------------------
    std::string Attribute::get_value() const
    {
        return reinterpret_cast<const char*>(xmlGetProp(cobj->parent, cobj->name));
    }
        
//------------------------------------------------------------------------------
    void Attribute::set_value(const std::string& value)
    {
        xmlSetProp(cobj->parent, cobj->name, reinterpret_cast<const xmlChar*>(value.c_str()));
    }
}