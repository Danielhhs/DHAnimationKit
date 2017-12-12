#version 300 es

precision highp float;

uniform sampler2D s_tex;
uniform float u_percent;
uniform float u_event;

in vec2 v_texCoords;

layout(location = 0) out vec4 out_color;

void main() {
    float percent = u_percent;
    if (u_event == 1.f) {
        percent = 1.f - u_percent;
    }
    out_color = texture(s_tex, v_texCoords);
    out_color.a = percent * percent;
}