package topo

/*
#include <stdlib.h>
#include "topo_c_api.h"
#cgo CFLAGS: -I ./
#cgo linux CXXFLAGS: -I ./include/oce -I ./include/linux/oce -I ./
#cgo darwin CXXFLAGS: -I ./include/oce -I ./include/darwin/oce -I ./ -std=gnu++14
#cgo windows CXXFLAGS:  -I ./include/oce -I ./include/windows/oce -I ./
*/
import "C"
import "unsafe"

//export begin
func begin(ctx unsafe.Pointer) {
	(*MeshReceiver)(ctx).begin()
}

//export end
func end(ctx unsafe.Pointer) {
	(*MeshReceiver)(ctx).end()
}

//export appendFace
func appendFace(ctx unsafe.Pointer, color C.struct__color_t) C.int {
	return C.int((*MeshReceiver)(ctx).appendFace(Color{val: color}))
}

//export appendNodeNorm
func appendNodeNorm(ctx unsafe.Pointer, face C.int, p, n C.struct__pnt3d_t) {
	(*MeshReceiver)(ctx).appendNodeNorm(int(face), Point3{val: p}, Point3{val: n})
}

//export appendNode
func appendNode(ctx unsafe.Pointer, face C.int, p C.struct__pnt3d_t) {
	(*MeshReceiver)(ctx).appendNode(int(face), Point3{val: p})
}

//export appendTriangle
func appendTriangle(ctx unsafe.Pointer, face C.int, a C.int, b C.int, c C.int) {
	(*MeshReceiver)(ctx).appendTriangle(int(face), [3]int{int(a), int(b), int(c)})
}
