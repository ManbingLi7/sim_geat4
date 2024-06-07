#include "detector.hh"

MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{}

MySensitiveDetector::~MySensitiveDetector()
{}

G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{
  G4Track *track = aStep->GetTrack();
  //preStepPoint mean photon enter the detector
  G4StepPoint *preStepPoint = aStep->GetPreStepPoint();
  //photon leave the detector
  G4StepPoint *postStepPoint = aStep->GetPostStepPoint();

  G4ThreeVector posPhoton = preStepPoint->GetPosition();
  //G4cout << "Photon position: " << posPhoton << G4endl;
  const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
  G4int copyNo = touchable->GetCopyNumber();
  G4cout << "Copy Number:" << copyNo <<G4endl;
  //G4ThreeVector posDetector = physVol->GetTranslation();
  //G4cout << "Detector position : "<< posDetector << G4endl;
  
}


  

