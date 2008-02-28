/*  DreamChess
**
**  DreamChess is the legal property of its developers, whose names are too
**  numerous to list here. Please refer to the COPYRIGHT file distributed
**  with this source distribution.
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "entity.h"

entity::entity()
{
    xpos=ypos=zpos=0.0f;
    xrot=yrot=zrot=0.0f;
    xscale=yscale=zscale=1.0f;
    name="Test";
}

entity::entity( float x, float y, float z )
{
    xpos=x; ypos=y; zpos=z;
    xrot=yrot=zrot=0.0f;
    xscale=yscale=zscale=1.0f;
    name="Test";
}

entity::entity( float x, float y, float z, 
    float xr, float yr, float zr )
{
    xpos=x; ypos=y; zpos=z;
    xrot=xr; yrot=yr; zrot=zr;
    xscale=yscale=zscale=1.0f;
    name="Test";
}

entity::entity( float x, float y, float z, 
    float xr, float yr, float zr,
    float xs, float ys, float zs )
{
    xpos=x; ypos=y; zpos=z;
    xrot=xr; yrot=yr; zrot=zr;
    xscale=xs; yscale=ys; zscale=zs;
    name="Test";
}