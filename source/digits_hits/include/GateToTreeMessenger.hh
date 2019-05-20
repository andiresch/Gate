/*----------------------
   Copyright (C): OpenGATE Collaboration

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See LICENSE.md for further details
----------------------*/


//
// Created by mdupont on 17/05/19.
//

#ifndef GATE_GATETOTREEMESSENGER_HH
#define GATE_GATETOTREEMESSENGER_HH

#include "GateOutputModuleMessenger.hh"

class GateToTree;
class G4UIcmdWithAString;
class G4UIcmdWithABool;
class G4UIcmdWithoutParameter;


class GateToTreeMessenger : public GateOutputModuleMessenger
{
public:
  GateToTreeMessenger(GateToTree *m);

  virtual ~GateToTreeMessenger();

  void SetNewValue(G4UIcommand *icommand, G4String string) override;

private:

  G4UIcmdWithAString* m_addFileNameCmd;
  G4UIcmdWithoutParameter *m_enableHitsOutput;
  G4UIcmdWithoutParameter *m_disableHitsOutput;
  G4UIcmdWithAString* m_addCollectionCmd;
  GateToTree *m_gateToTree;

};


#endif //GATE_GATETOTREEMESSENGER_HH
