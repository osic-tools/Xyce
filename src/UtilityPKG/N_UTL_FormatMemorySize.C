//-------------------------------------------------------------------------
//   Copyright 2002-2026 National Technology & Engineering Solutions of
//   Sandia, LLC (NTESS).  Under the terms of Contract DE-NA0003525 with
//   NTESS, the U.S. Government retains certain rights in this software.
//
//   This file is part of the Xyce(TM) Parallel Electrical Simulator.
//
//   Xyce(TM) is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   Xyce(TM) is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with Xyce(TM).
//   If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
//
// Purpose        :
//
//
//
// Special Notes  :
//
//
// Creator        : David Baur
//
// Creation Date  :
//
//
//
//
//-------------------------------------------------------------------------

#include <Xyce_config.h>

#include <sstream>
#include <iomanip>
#include <N_UTL_Math.h>

#include <N_UTL_FormatMemorySize.h>

namespace Xyce {

//-----------------------------------------------------------------------------
// Function      : formatMemorySize
// Purpose       :
// Special Notes :
// Scope         : public
// Creator       : David G. Baur  Raytheon  Sandia National Laboratories 1355
// Creation Date : Tue Sep  2 17:06:44 2014
//-----------------------------------------------------------------------------
std::string
formatMemorySize(
  double                size)
{
  std::ostringstream os;

  static const double kb = 1024.0;
  // static const double mb = kb * kb;
  // static const double gb = kb * kb * kb;

  if (size < 0.0) {
    os << "-";
    size = -size;
  }

  // output size in kilo bytes
  os << static_cast<unsigned long>(size/kb) << " KB";

  return os.str();
}


std::string
formatMemorySize(
  MemorySize            size)
{
  std::ostringstream os;

  static const MemorySize kb = 1024;
  // static const MemorySize mb = kb * kb;
  // static const MemorySize gb = kb * kb * kb;

  // output size in kilo bytes
  os << size/kb << " KB";

  return os.str();
}

} // namespace Xyce
