# $FreeBSD: head/multimedia/mkclean/Makefile 557795 2020-12-12 05:34:49Z linimon $

PORTNAME=	mkclean
PORTVERSION=	0.8.7
PORTREVISION=	2
CATEGORIES=	multimedia
MASTER_SITES=	SF/matroska/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Clean and optimize Matroska and WebM files

LICENSE=	BSD3CLAUSE

BROKEN_aarch64=	Does not install: arm-none-linux-gnueabi-gcc: Command not found
BROKEN_armv6=	Does not install: arm-none-linux-gnueabi-gcc: Command not found
BROKEN_armv7=	Does not install: arm-none-linux-gnueabi-gcc: Command not found
BROKEN_mips64=	Does not install: mipsel-linux-gcc: Command not found
BROKEN_riscv64=	Does not compile: cc: invalid arch name 'i486', string must begin with rv32{i,e,g} or rv64{i,g}
BROKEN_sparc64=	Does not install: gmake: GNUmakefile: No such file or directory

HAS_CONFIGURE=	yes

USES=		compiler:c++11-lang iconv localbase:ldflags gmake tar:bzip2

LDFLAGS+=	${ICONV_LIB}

MAKE_ENV=	"LFLAGS=${LDFLAGS}"
MAKEFILE=	GNUmakefile
BUILD_WRKSRC=	${WRKSRC}/${PORTNAME}

PLIST_FILES=	bin/mkclean \
		bin/mkWDclean

post-extract:
	@${REINPLACE_CMD} -e 's,/usr/local,$$(DESTDIR)$$(PREFIX),g' ${WRKSRC}/corec/tools/coremake/gcc_mak.inc
	@${RM} ${WRKSRC}/libmatroska2/test/test.proj

.include <bsd.port.mk>
