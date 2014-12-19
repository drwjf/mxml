//  Created by Alejandro Isaza on 2014-05-05.
//  Copyright (c) 2014 Venture Media Labs. All rights reserved.

#pragma once
#include "PlacementGeometry.h"
#include <mxml/dom/Direction.h>

namespace mxml {

class DirectionGeometry : public PlacementGeometry {
public:
    explicit DirectionGeometry(const dom::Direction& direction);
    
    const dom::Direction& direction() const {
        return _direction;
    }
    
private:
    const dom::Direction& _direction;
};

} // namespace mxml
