/*****************************************************************************
The Dark Mod GPL Source Code

This file is part of the The Dark Mod Source Code, originally based
on the Doom 3 GPL Source Code as published in 2011.

The Dark Mod Source Code is free software: you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation, either version 3 of the License,
or (at your option) any later version. For details, see LICENSE.TXT.

Project: The Dark Mod (http://www.thedarkmod.com/)

******************************************************************************/
#version 140

uniform sampler2D u_tex0;
uniform float u_alphaTest;
uniform vec4 u_color;

in float clipPlaneDist; 
in vec4 var_TexCoord0;

out vec4 FragColor;

void main() {
	if (clipPlaneDist < 0.0)
		discard;
	if (u_alphaTest < 0)
		FragColor = u_color;
	else {
		vec4 tex = texture(u_tex0, var_TexCoord0.st);
		if (tex.a <= u_alphaTest)
			discard;
		FragColor = tex*u_color;	
	}
}