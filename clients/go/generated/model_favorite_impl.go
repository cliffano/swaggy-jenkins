/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type FavoriteImpl struct {
	Class string `json:"_class,omitempty"`
	Links FavoriteImpllinks `json:"_links,omitempty"`
	Item PipelineImpl `json:"item,omitempty"`
}
