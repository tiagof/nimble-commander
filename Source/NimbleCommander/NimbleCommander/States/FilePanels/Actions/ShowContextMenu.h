// Copyright (C) 2024 Michael Kazakov. Subject to GNU General Public License version 3.
#pragma once

#include "DefaultAction.h"

namespace nc::panel::actions {

struct ShowContextMenu final : PanelAction {
    void Perform(PanelController *_target, id _sender) const override;
};

} // namespace nc::panel::actions
