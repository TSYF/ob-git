# $FreeBSD: head/multimedia/dav1d/Makefile 566294 2021-02-22 13:06:40Z jbeich $

PORTNAME=	dav1d
DISTVERSION=	0.8.2
CATEGORIES=	multimedia

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Small and fast AV1 decoder

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${BUILD_DEPENDS_${ARCH}}
BUILD_DEPENDS_amd64=	nasm:devel/nasm
BUILD_DEPENDS_i386=	nasm:devel/nasm

USES=		compiler:c11 meson
USE_GITLAB=	yes
USE_LDCONFIG=	yes
GL_SITE=	https://code.videolan.org
GL_ACCOUNT=	videolan
GL_COMMIT=	f06148e7c755098666b9c0ed97a672a51785413a
LDFLAGS_i386=	-Wl,-z,notext

OPTIONS_DEFINE=	SDL TEST
OPTIONS_SUB=	yes

SDL_USES=	pkgconfig sdl
SDL_USE=	SDL=sdl2
SDL_BUILD_DEPENDS=	${LOCALBASE}/include/vulkan/vulkan.h:graphics/vulkan-headers
SDL_LIB_DEPENDS=	libplacebo.so:graphics/libplacebo \
			libvulkan.so:graphics/vulkan-loader
SDL_MESON_TRUE=	enable_examples

TEST_GL_TUPLE=	videolan:dav1d-test-data:0a4d5033b79cb51e4478ca314ca586ecc44359cf:testdata/tests/dav1d-test-data
TEST_MESON_TRUE=enable_tests testdata_tests

.if make(makesum) # for optional distfiles
.MAKEFLAGS:	WITH="${OPTIONS_DEFINE}"
.endif

# https://bugs.llvm.org/show_bug.cgi?id=40635
.if !empty(CFLAGS:M-flto*)
MESON_ARGS+=	${MESON_ARGS_${CHOSEN_COMPILER_TYPE}_${ARCH}}
MESON_ARGS_clang_amd64=	-Dstack_alignment=16
MESON_ARGS_clang_i386=	-Dstack_alignment=4
.endif

pre-install-TEST-on: do-test

.include <bsd.port.mk>
