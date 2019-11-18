#ifndef __FLYWAVE_MESH_TOPO_SOLID_HH__
#define __FLYWAVE_MESH_TOPO_SOLID_HH__

#include <TopExp_Explorer.hxx>
#include <TopoDS_Solid.hxx>
#include <gp_Pln.hxx>

#include "bool_type.hh"
#include "shape.hh"

namespace flywave {
namespace topo {

class shell;
class face;
class wire;
class edge;
class comp_solid;

class solid : public shape {
public:
  solid() = default;
  virtual ~solid() = default;

  static solid make_solid(const comp_solid &S);

  static solid make_solid(const shell &S);

  static solid make_solid(const shell &S1, const shell &S2);

  static solid make_solid(const shell &S1, const shell &S2, const shell &S3);

  static solid make_solid(std::vector<shell> &shells);

  static solid make_solid(std::initializer_list<shell> shells);

  static solid make_solid(const solid &So);

  static solid make_solid(const solid &So, const shell &S);

  static solid make_solid(std::vector<face> &faces, double tolerance);

  static solid make_solid(std::initializer_list<face> faces, double tolerance);

  static solid make_solid_from_box(const Standard_Real dx,
                                   const Standard_Real dy,
                                   const Standard_Real dz);

  static solid make_solid_from_box(const gp_Pnt &P, const Standard_Real dx,
                                   const Standard_Real dy,
                                   const Standard_Real dz);

  static solid make_solid_from_box(const gp_Pnt &P1, const gp_Pnt &P2);

  static solid make_solid_from_box(const gp_Ax2 &Axes, const Standard_Real dx,
                                   const Standard_Real dy,
                                   const Standard_Real dz);

  static solid make_solid_from_cylinder(const Standard_Real R,
                                        const Standard_Real H);

  static solid make_solid_from_cylinder(const Standard_Real R,
                                        const Standard_Real H,
                                        const Standard_Real Angle);

  static solid make_solid_from_cylinder(const gp_Ax2 &Axes,
                                        const Standard_Real R,
                                        const Standard_Real H);

  static solid make_solid_from_cylinder(const gp_Ax2 &Axes,
                                        const Standard_Real R,
                                        const Standard_Real H,
                                        const Standard_Real Angle);

  static solid make_solid_from_cone(const Standard_Real R1,
                                    const Standard_Real R2,
                                    const Standard_Real H);

  static solid make_solid_from_cone(const Standard_Real R1,
                                    const Standard_Real R2,
                                    const Standard_Real H,
                                    const Standard_Real angle);

  static solid make_solid_from_cone(const gp_Ax2 &Axes, const Standard_Real R1,
                                    const Standard_Real R2,
                                    const Standard_Real H);

  static solid make_solid_from_cone(const gp_Ax2 &Axes, const Standard_Real R1,
                                    const Standard_Real R2,
                                    const Standard_Real H,
                                    const Standard_Real angle);

  static solid make_solid_from_revolution(const Handle(Geom_Curve) & Meridian);

  static solid make_solid_from_revolution(const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real angle);

  static solid make_solid_from_revolution(const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real VMin,
                                          const Standard_Real VMax);

  static solid make_solid_from_revolution(const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real VMin,
                                          const Standard_Real VMax,
                                          const Standard_Real angle);

  static solid make_solid_from_revolution(const gp_Ax2 &Axes,
                                          const Handle(Geom_Curve) & Meridian);

  static solid make_solid_from_revolution(const gp_Ax2 &Axes,
                                          const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real angle);

  static solid make_solid_from_revolution(const gp_Ax2 &Axes,
                                          const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real VMin,
                                          const Standard_Real VMax);

  static solid make_solid_from_revolution(const gp_Ax2 &Axes,
                                          const Handle(Geom_Curve) & Meridian,
                                          const Standard_Real VMin,
                                          const Standard_Real VMax,
                                          const Standard_Real angle);

  static solid make_solid_from_sphere(const Standard_Real R);

  static solid make_solid_from_sphere(const Standard_Real R,
                                      const Standard_Real angle);

  static solid make_solid_from_sphere(const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2);

  static solid make_solid_from_sphere(const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2,
                                      const Standard_Real angle3);

  static solid make_solid_from_sphere(const gp_Pnt &Center,
                                      const Standard_Real R);

  static solid make_solid_from_sphere(const gp_Pnt &Center,
                                      const Standard_Real R,
                                      const Standard_Real angle);

  static solid make_solid_from_sphere(const gp_Pnt &Center,
                                      const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2);

  static solid make_solid_from_sphere(const gp_Pnt &Center,
                                      const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2,
                                      const Standard_Real angle3);

  static solid make_solid_from_sphere(const gp_Ax2 &Axis,
                                      const Standard_Real R);

  static solid make_solid_from_sphere(const gp_Ax2 &Axis, const Standard_Real R,
                                      const Standard_Real angle);

  static solid make_solid_from_sphere(const gp_Ax2 &Axis, const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2);

  static solid make_solid_from_sphere(const gp_Ax2 &Axis, const Standard_Real R,
                                      const Standard_Real angle1,
                                      const Standard_Real angle2,
                                      const Standard_Real angle3);

  static solid make_solid_from_torus(const Standard_Real R1,
                                     const Standard_Real R2);

  static solid make_solid_from_torus(const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle);

  static solid make_solid_from_torus(const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle1,
                                     const Standard_Real angle2);

  static solid make_solid_from_torus(const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle1,
                                     const Standard_Real angle2,
                                     const Standard_Real angle);

  static solid make_solid_from_torus(const gp_Ax2 &Axes, const Standard_Real R1,
                                     const Standard_Real R2);

  static solid make_solid_from_torus(const gp_Ax2 &Axes, const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle);

  static solid make_solid_from_torus(const gp_Ax2 &Axes, const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle1,
                                     const Standard_Real angle2);

  static solid make_solid_from_torus(const gp_Ax2 &Axes, const Standard_Real R1,
                                     const Standard_Real R2,
                                     const Standard_Real angle1,
                                     const Standard_Real angle2,
                                     const Standard_Real angle);

  static solid make_solid_from_wedge(const Standard_Real dx,
                                     const Standard_Real dy,
                                     const Standard_Real dz,
                                     const Standard_Real ltx);

  static solid make_solid_from_wedge(const gp_Ax2 &Axes, const Standard_Real dx,
                                     const Standard_Real dy,
                                     const Standard_Real dz,
                                     const Standard_Real ltx);

  static solid
  make_solid_from_wedge(const Standard_Real dx, const Standard_Real dy,
                        const Standard_Real dz, const Standard_Real xmin,
                        const Standard_Real zmin, const Standard_Real xmax,
                        const Standard_Real zmax);

  static solid
  make_solid_from_wedge(const gp_Ax2 &Axes, const Standard_Real dx,
                        const Standard_Real dy, const Standard_Real dz,
                        const Standard_Real xmin, const Standard_Real zmin,
                        const Standard_Real xmax, const Standard_Real zmax);

  int num_solids() const;

  int num_faces() const;

  double area() const;

  double volume() const;

  Bnd_Box inertia() const;

  gp_Pnt centre_of_mass() const;

  int extrude(const face &f, gp_Pnt p1, gp_Pnt p2);

  int extrude(const face &f, gp_Vec dir);

  int revolve(const face &f, gp_Pnt p1, gp_Pnt p2, double angle);

  int loft(std::vector<shape> &profiles, bool ruled = false,
           double tolerance = 1.0e-06);

  int pipe(const face &f, const wire &w);

  int sweep(const wire &spine, std::vector<shape> &profiles, int cornerMode);

  int boolean(const solid &tool, bool_op_type op);

  int fillet(std::vector<edge> &edges, std::vector<double> radius);

  int chamfer(std::vector<edge> &edges, std::vector<double> distances);

  int shelling(std::vector<face> &faces, double offset,
               double tolerance = 1.0e-06);

  int offset(const face &f, double offset, double tolerance = 1.0e-06);

  int draft(std::vector<face> &faces, gp_Dir d, double angle, gp_Pln p);

  int evolved(const face &Spine, const wire &Profil);

  int evolved(const wire &Spine, const wire &Profil);

  int feat_prism(const face &f, gp_Dir d, double height, bool fuse = true);

  int feat_prism(const face &f, gp_Dir d, const face &from, const face &end,
                 bool fuse = true);

  int feat_prism(const face &f, gp_Dir d, const face &until, bool fuse = true);

  int feat_draft_prism(const face &f, double angle, double height,
                       bool fuse = true);

  int feat_draft_prism(const face &f, double angle, const face &from,
                       const face &end, bool fuse = true);

  int feat_draft_prism(const face &f, double angle, const face &until,
                       bool fuse = true);

  int feat_revol(const face &f, const gp_Ax1 &Axes, const face &from,
                 const face &end, bool fuse = true);

  int feat_revol(const face &f, const gp_Ax1 &Axes, const face &until,
                 bool fuse = true);

  int feat_pipe(const face &f, const wire &Spine, const face &from,
                const face &end, bool fuse = true);

  int feat_pipe(const face &f, const wire &Spine, const face &until,
                bool fuse = true);

  int linear_form(const wire &w, const Handle(Geom_Plane) & p, gp_Dir d,
                  gp_Dir d1, bool fuse = true);

  int revolution_form(const wire &w, const Handle(Geom_Plane) & p,
                      const gp_Ax1 &Axes, Standard_Real h1, Standard_Real h2,
                      bool fuse = true);

  boost::optional<face> section(gp_Pnt pnt, gp_Pnt nor);

  int convert_to_nurbs();

  TopoDS_Solid &value();
  const TopoDS_Solid &value() const;

  virtual geometry_object_type type() const override {
    return geometry_object_type::SolidType;
  }

  virtual shape copy(bool deep = true) const override;

  solid(TopoDS_Shape shp);

protected:
  friend class solid_iterator;
  friend class shape;
};

class solid_iterator {
public:
  TopExp_Explorer ex;
  solid_iterator(shape &arg) : ex(arg.value(), TopAbs_SOLID) {}
  void reset() { ex.ReInit(); }
  boost::optional<solid> next() {
    if (ex.More()) {
      solid ret{ex.Current()};
      ex.Next();
      return {ret};
    } else {
      return boost::none;
    }
  }
};
} // namespace topo
} // namespace flywave

#endif // __FLYWAVE_MESH_TOPO_SOLID_HH__
