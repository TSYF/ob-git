# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/multimedia/p5-Audio-M4P/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Audio-M4P
PORTVERSION=	0.57
CATEGORIES=	multimedia perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	M4P / MP4 / m4a Quicktime audio and video tools

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Crypt-Rijndael>=0:security/p5-Crypt-Rijndael \
		p5-Tree-Simple>=0:devel/p5-Tree-Simple \
		p5-Tree-Simple-View>=0:devel/p5-Tree-Simple-View
TEST_DEPENDS=	p5-Test-Memory-Cycle>=0:devel/p5-Test-Memory-Cycle

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
