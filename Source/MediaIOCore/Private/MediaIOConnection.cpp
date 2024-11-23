#include "MediaIOConnection.h"

FMediaIOConnection::FMediaIOConnection() {
    this->TransportType = EMediaIOTransportType::SingleLink;
    this->QuadTransportType = EMediaIOQuadLinkTransportType::SquareDivision;
    this->PortIdentifier = 0;
}

