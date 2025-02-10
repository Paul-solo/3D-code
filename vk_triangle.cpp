#include "vk_triangle.h"

#include "oppgav1.h"
#include "oppgave2.h"
#include "oppgave3.h"

VkTriangle::VkTriangle()
{   //y= 1+x^2
    // Y up, front = CCW
    // X,     Y,     Z,     R,    G,    B, U, V



    //mVertices = GetVertices1(); // VK_PRIMITIVE_TOPOLOGY_LINE_STRIP
    //mVertices = GetVertices2(); // VK_PRIMITIVE_TOPOLOGY_LINE_STRIP
    mVertices = GetVertices3(); // VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST
}

