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

type PipelineBranchesitempullRequest struct {
	Links PipelineBranchesitempullRequestlinks `json:"_links,omitempty"`
	Author string `json:"author,omitempty"`
	Id string `json:"id,omitempty"`
	Title string `json:"title,omitempty"`
	Url string `json:"url,omitempty"`
	Class string `json:"_class,omitempty"`
}
