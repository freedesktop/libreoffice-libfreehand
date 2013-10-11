/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libfreehand project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef __FHSTYLESCOLLECTOR_H__
#define __FHSTYLESCOLLECTOR_H__

#include "FHCollector.h"

namespace libfreehand
{

class FHStylesCollector : public FHCollector
{
public:
  FHStylesCollector();
  virtual ~FHStylesCollector();

  // collector functions
  void collectUString(unsigned recordId, const std::vector<unsigned short> &ustr) {}
  void collectMName(unsigned recordId, const WPXString &name) {}
  void collectPath(unsigned recordId, unsigned short graphicStyle,
                   const std::vector<std::vector<std::pair<double, double> > > &path,
                   bool evenOdd, bool closed) {}
  void collectXform(unsigned recordId, double m11, double m21,
                    double m12, double m22,  double m13, double m23) {}
  void collectOval(unsigned recordId, unsigned short graphicStyle, unsigned short layer,
                   unsigned short xform, double x, double y, double w, double h,
                   double arc1, double arc2, bool closed) {}
  void collectRectangle(unsigned recordId, unsigned short graphicStyle, unsigned short layer,
                        unsigned short xform, double x1, double y1, double x2, double y2) {}

private:
  FHStylesCollector(const FHStylesCollector &);
  FHStylesCollector &operator=(const FHStylesCollector &);

};

} // namespace libfreehand

#endif /* __FHSTYLESCOLLECTOR_H__ */
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */